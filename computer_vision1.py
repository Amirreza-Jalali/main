import cv2
import numpy as np

image = cv2.imread('/Users/apple/Desktop/images/BikesHelmets34.png')

gray_image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
thr = cv2.threshold(gray_image, 127, 255, 0)[1]

kernel = np.array([ [0, 0, 1, 0, 0],
                    [0, 1, 1, 1, 0],
                    [1, 1, 1, 1, 1],
                    [0, 1, 1, 1, 0],
                    [0, 0, 1, 0, 0]], dtype=np.uint8)

erode = cv2.erode(thr, kernel=kernel, iterations=1)
dilate = cv2.dilate(thr, kernel=kernel, iterations=1)

cv2.imshow('Original Image', image)
cv2.imshow('Binary Image', thr)
cv2.imshow('Erode Image', erode)
cv2.imshow('Dilate Image', dilate)

cv2.waitKey(0)
cv2.destroyAllWindows()