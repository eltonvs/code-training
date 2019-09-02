import Control.Monad

fn :: [(Int, Int)] -> (Int, Int) -> Bool
fn [] _ = True
fn ((x, y):xys) (a, b) = if x == a && y /= b then False else fn xys (a, b)

valid :: [(Int, Int)] -> Bool
valid f = foldl (\acc x -> acc && x) True $ map (fn f) f

main = do
    t <- fmap (read :: String -> Int) getLine
    forM [1..t] $ \_ -> do
        n <- fmap (read :: String -> Int) getLine
        func <- forM [1..n] $ \_ -> do fmap ((\[a, b]->(a,b)).map (read :: String -> Int).words) getLine :: IO (Int, Int)
        putStrLn $ if valid func then "YES" else "NO"
