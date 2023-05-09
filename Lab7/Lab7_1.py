import cv2

image = cv2.imread(r'C:\Users\mbark\Paprika.jpg', 1)

red, green, blue = cv2.split(image)

cv2.imshow('Red channel', red)
cv2.imshow('Green channel', green)
cv2.imshow('Blue channel', blue)

cv2.waitKey(0)
cv2.destroyAllWindows()


