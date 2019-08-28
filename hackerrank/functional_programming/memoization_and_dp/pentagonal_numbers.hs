import Control.Monad

pentagonal :: Int -> Int
pentagonal n = pentagonal' n 0 where
  pentagonal' :: Int -> Int -> Int
  pentagonal' 0 acc = acc
  pentagonal' n acc = pentagonal' (n - 1) (acc + 3 * n - 2)

main :: IO ()
main = do
  n_temp <- getLine
  let n = read n_temp :: Int
  forM_ [1..n] $ \a0  -> do
    x_temp <- getLine
    let x = read x_temp :: Int
    print $ pentagonal x
