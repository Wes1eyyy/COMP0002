merge :: Ord a => [a] -> [a] -> [a]
merge [] [] = []
merge [] ys = ys
merge xs [] = xs
merge (x:xs)(y:ys)
    | x <= y = x:merge xs (y:ys)
    | otherwise = y:merge (x:xs) ys


foldr :: (a -> b -> b) -> b -> [a] -> b
foldr f z [] = []
foldr f z (x:xs) = f x (foldr f z xs)

foldl :: (a -> b -> b) -> b -> [a] -> b
foldl f z [] = []
foldl f z (x:xs) = foldl f (f z x) xs

infix 4 'divides'
divides :: Integral a => a -> a -> Bool
x 'divides' y = y 'mod' x == 0

prime :: Integral a => a -> Bool
prime n
    | n <= 1 = False
    | otherwise = foldr1 (&&) map (\x n 'divides' x) [2..(n-1)]

cube :: Integral a => [a] -> [a]
cube [x] = [x ^ 3]

mySum :: [a] -> a
mySum [] = 0
mySum (x:xs) = flodr1 (+) map (cube) (x:xs)

SumAcc :: Num a => [a] -> a
SumAcc [] = 0
SumAcc (x:xs) = x + SumAcc xs

SumAcc :: Num a => [a] -> a
SumAcc xs = SumAcc' xs 0
    where
        SumAcc' [] acc = acc
        SumAcc' (x:xs) acc = SumAcc' xs (acc+x)

fibonacci :: a -> a
fibonacci 0 = 0
fibonacci 1 = 1
fibonacci n = fibonacci (n-1) + fibonacci (n-2)