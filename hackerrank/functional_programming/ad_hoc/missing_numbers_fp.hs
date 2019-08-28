import Data.List

printList :: [Int] -> IO ()
printList [] = putStrLn ""
printList [x] = print x
printList (x:xs) = do
  putStr $ (show  x) ++ " "
  printList [y | y <- xs, y /= x]

missing :: [Int] -> [Int] -> [Int]
missing [] x = x
missing _ [] = []
missing l (x:xs)
  | cond = missing nl xs
  | otherwise = x : missing l xs
    where
      contains :: [Int] -> Int -> (Bool, [Int])
      contains [] _ = (False, [])
      contains (x:xs) n = if n == x then (True, xs) else (c, x:l) where
        (c, l) = contains xs n
      (cond, nl) = contains l x

readInts :: IO [Int]
readInts = fmap (map read.words) getLine

main :: IO ()
main = do
  n <- getLine
  ns <- readInts
  m <- getLine
  ms <- readInts
  printList $ sort $ missing ns ms
