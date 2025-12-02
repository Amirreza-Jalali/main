import cv2
import numpy as np

image = cv2.imread('images-2.jpeg')
image = image[:image.shape[0] // 2, :]
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
blurred = cv2.GaussianBlur(gray, (5, 5), sigmaX=0, sigmaY=0)
edges = cv2.Canny(blurred, 50, 150)
morph_kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (7, 7))
morph = cv2.morphologyEx(edges, cv2.MORPH_CLOSE, morph_kernel)
circles = cv2.HoughCircles(morph, cv2.HOUGH_GRADIENT, dp=1.2, minDist=30,
                           param1=50, param2=30, minRadius=15, maxRadius=50)
if circles is not None:
    circles = np.round(circles[0, :]).astype("int")
    for (cx, cy, cr) in circles:
        cv2.circle(image, (cx, cy), cr, (0, 255, 0), 3)
cv2.imshow("Output", image)
cv2.waitKey(0)
cv2.destroyAllWindows()
