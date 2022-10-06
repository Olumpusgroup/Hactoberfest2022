import cv2
import numpy as np

# Open the given colour image ‘Lenna.png’, convert it to grayscale and save as ‘grayLenna.jpg’.

img = cv2.imread('Lenna.png')
cv2.imshow('Lenna', img)

gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
cv2.imwrite('grayLenna.png', gray)
cv2.imshow('greyLenna', gray)
cv2.waitKey(0)

# Change the image to contain four grayscale shades in all.
# Equally space these four values (white, two equally spaced grays and black).
# Save this image as gray4Lenna.jpg.

numColors = 4

img = cv2.imread("Lenna.png")

gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
gray = gray.astype(np.float32)/255

fourShades = 255*np.floor(gray*numColors+0.5)/numColors
fourShades = fourShades.clip(0,255).astype(np.uint8)

cv2.imwrite('gray4Lenna.png', fourShades)

cv2.imshow('gray4Lenna', fourShades)
cv2.waitKey(0)

# Open the image ‘calvinHobbes.jpeg’. The size is 225x225.
# Scale it up to 450x450 and save the scaled image as ‘chScaled.jpg’.

img = cv2.imread('calvinHobbes.jpeg')
cv2.imshow('Calvin and Hobbes', img)

imgScaled = cv2.resize(img, (450, 450))
cv2.imwrite('chScaled.jpeg', imgScaled)
cv2.imshow('Calvin and Hobbes Scaled', imgScaled)
cv2.waitKey(0)

cv2.destroyAllWindows()