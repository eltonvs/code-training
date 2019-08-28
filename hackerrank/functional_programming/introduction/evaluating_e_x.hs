import Control.Applicative
import Control.Monad
import System.IO

fat :: Int -> Int
fat n = fat' n 1
  where
    fat' :: Int -> Int -> Int
    fat' 0 acc = acc
    fat' n acc = fat' (n - 1) (n * acc)

ex :: Double -> Int -> Double
ex _ 0 = 1
ex x n = (x ^ n) / fromIntegral (fat n) + ex x (n - 1)

main :: IO ()
main = do
    n_temp <- getLine
    let n = read n_temp :: Int
    forM_ [1..n] $ \a0  -> do
        x_temp <- getLine
        let x = read x_temp :: Double
        print $ ex x 9


getMultipleLines :: Int -> IO [String]

getMultipleLines n
    | n <= 0 = return []
    | otherwise = do
        x <- getLine
        xs <- getMultipleLines (n-1)
        let ret = (x:xs)
        return ret
