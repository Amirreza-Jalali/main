import cv2

img = cv2.imread('/Users/apple/Desktop/images/BikesHelmets4.png')
cv2.imshow('myimg', img)

a = cv2.waitKey(0)

while a != 0x1b:

    a = cv2.waitKey(0)

    if a == ord('g') or a == ord('G'):
        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        cv2.imwrite('output_gray.jpg', gray)
        cv2.imshow('myimg', gray)
        print('Apply gray filter')

    elif a == ord('o') or a == ord('O'):
        cv2.imshow('myimg', img)
        print('Back to orginal mode')


print("finish")