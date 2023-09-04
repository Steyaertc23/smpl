class Token:
    def __init__(self, type_:str, value:int|float|str|None=None) -> None:
        self.type = type_
        self.value = value

    def __repr__(self) -> str:
        if self.value:
            return f"{self.type}:{self.value}"
        return f"{self.value}"