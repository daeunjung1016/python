#1. 뉴스 기사를 스크랩해 온 후, 뉴스 기사 내에 있는 유저가 입력한 단어를 모두 대문자화
#2. 영어 기사를 스크랩해 온 후, 단어 사이에 🐽 넣고 출력하기

# news = """A Bears player who spoke on the condition of anonymity through Korean broadcaster Channel A said Monday that Oh was violent toward him when he refused Oh's request for sleeping pills. The player also said that Oh said he would stab him with a weapon if he did not keep it a secret.
# """
# word = input("단어 입력: ")
# newNews = news.replace(word,word.upper())
# print(newNews)

news2 = """HYBE lost more than 850 billion won ($619 million) in market cap in two days as the K-pop powerhouse behind BTS clashes with the CEO of subsidiary label ADOR, which manages the girl group NewJeans.
 HYBE’s share price plunged to a low of 202,500 won on Tuesday morning, a drop of 4.71 percent from the previous closing price, before rebounding to close at 210,000 won, down 1.18 percent."""
words = news2.split(" ")
news2 = "🐽".join(words)
print(news2)