class TextEditor:

    def __init__(self):
        self.text = ''
        self.cursor_pos = 0

    def addText(self, text: str) -> None:
        self.text = self.text[:self.cursor_pos] + text + self.text[self.cursor_pos:]
        self.cursor_pos += len(text)

    def deleteText(self, k: int) -> int:
        to_delete_length = min(k, self.cursor_pos)
        self.text = self.text[:self.cursor_pos - to_delete_length] + self.text[self.cursor_pos:]
        self.cursor_pos -= to_delete_length
        return to_delete_length

    def cursorLeft(self, k: int) -> str:
        self.cursor_pos = max(0, self.cursor_pos - k)
        to_return_length = min(10, self.cursor_pos)
        return self.text[self.cursor_pos - to_return_length:self.cursor_pos]

    def cursorRight(self, k: int) -> str:
        self.cursor_pos = min(len(self.text), self.cursor_pos + k)
        to_return_length = min(10, self.cursor_pos)
        return self.text[self.cursor_pos - to_return_length:self.cursor_pos]


# Your TextEditor object will be instantiated and called as such:
# obj = TextEditor()
# obj.addText(text)
# param_2 = obj.deleteText(k)
# param_3 = obj.cursorLeft(k)
# param_4 = obj.cursorRight(k)
