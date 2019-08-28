import Control.Monad
import Data.List

divs :: Integer -> [Integer]
divs n = flatten [if x /= quot n x then [x, quot n x] else [x] | x <- [1..round $ sqrt $ fromIntegral n], mod n x == 0]

flatten :: [[a]] -> [a]
flatten [] = []
flatten (x:xs) = x ++ flatten xs

cdivs :: Integer -> Integer -> Int
cdivs n m = length $ intersect (divs n) (divs m)

readInts :: IO [Integer]
readInts = fmap (map read.words) getLine

main :: IO ()
main = do
  n_temp <- getLine
  let n = read n_temp :: Integer
  forM_ [1..n] $ \a0  -> do
    ints <- readInts
    print $ cdivs (ints !! 0) (ints !! 1)
