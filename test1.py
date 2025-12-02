import cv2
import numpy as np

# Load the image
image_path = "/Users/apple/Desktop/img1.JPG"
image = cv2.imread(image_path)
# Convert the image to HSV color space
hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
# h, s, v = cv2.split(hsv)
# cv2.namedWindow('Ali', cv2.WINDOW_AUTOSIZE)
# cv2.imshow("hsv", h)
# cv2.waitKey()
# cv2.imshow("hsv", s)
# cv2.waitKey()
# cv2.imshow("hsv", v)
# cv2.waitKey()
# cv2.imshow('Ali', hsv)
# cv2.waitKey()

# Define the color range for saffron flower detection
lower_color = np.array([120, 40, 70])  # Example values, might need adjustment
upper_color = np.array([170, 255, 255])  # Example values, might need adjustment

# Create a mask for the saffron color range
mask = cv2.inRange(hsv, lower_color, upper_color)

# Perform morphological operations to remove noise
kernel = np.ones((5, 5), np.uint8)
mask = cv2.erode(mask, kernel, iterations=1)
mask = cv2.dilate(mask, kernel, iterations=1)

# Find contours in the mask
contours, _ = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
print(_)

# Draw contours on the original image
result = image.copy()
cv2.drawContours(result, contours, -1, (0, 255, 0), 2)

concat = cv2.hconcat([image, result])
# Display the results
cv2.imshow('Images', concat)

while True:
    key = cv2.waitKey(0) & 0xFF
    if key == 0x1B:
        break
cv2.destroyAllWindows()






