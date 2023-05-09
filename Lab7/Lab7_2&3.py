import cv2

image = cv2.imread(r'C:\Users\mbark\Paprika.jpg', 1)

red, green, blue = cv2.split(image)

green = green * 0

red_and_blue = cv2.merge((red, green, blue))

cv2.imshow('Only red and blue', red_and_blue)
cv2.imshow('Original image', image)

cv2.waitKey(0)
cv2.destroyAllWindows()