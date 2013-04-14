#ifndef QSCORE_H
#define QSCORE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/KeywordQscore.h>


/**
 * @brief 质量得分类
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Qscore : public TaoDomain
{

public:
 virtual ~Qscore() { }

  QString getCatmatchQscore() const;
  void setCatmatchQscore (QString catmatchQscore);
  QList<KeywordQscore> getKeywordQscoreList() const;
  void setKeywordQscoreList (QList<KeywordQscore> keywordQscoreList);
  
  virtual void parseResponse();

private:
/**
 * @brief 类目出价质量得分
 **/
  QString catmatchQscore;

/**
 * @brief 词质量得分列表
 **/
  QList<KeywordQscore> keywordQscoreList;

};

#endif  /* QSCORE_H */
