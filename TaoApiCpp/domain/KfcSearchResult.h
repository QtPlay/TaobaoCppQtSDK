#ifndef KFCSEARCHRESULT_H
#define KFCSEARCHRESULT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief KFC 关键词过滤匹配结果
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class KfcSearchResult : public TaoDomain
{

public:
 virtual ~KfcSearchResult() { }

  QString getContent() const;
  void setContent (QString content);
  QString getLevel() const;
  void setLevel (QString level);
  bool getMatched() const;
  void setMatched (bool matched);
  
  virtual void parseResponse();

private:
/**
 * @brief 过滤后的文本： 
当匹配到B等级的词时，文本中的关键词被替换为*号，content即为关键词替换后的文本； 
其他情况，content始终为null
 **/
  QString content;

/**
 * @brief 匹配到的关键词的等级，值为null，或为A、B、C、D。 
当匹配不到关键词时，值为null，否则值为A、B、C、D中的一个。 
A、B、C、D等级按严重程度从高至低排列。
 **/
  QString level;

/**
 * @brief 是否匹配到关键词,匹配到则为true.
 **/
  bool matched;

};

#endif  /* KFCSEARCHRESULT_H */
