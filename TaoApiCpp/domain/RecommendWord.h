#ifndef RECOMMENDWORD_H
#define RECOMMENDWORD_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 推荐词
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RecommendWord : public TaoDomain
{

public:
 virtual ~RecommendWord() { }

  QString getAveragePrice() const;
  void setAveragePrice (QString averagePrice);
  QString getPertinence() const;
  void setPertinence (QString pertinence);
  QString getPv() const;
  void setPv (QString pv);
  QString getWord() const;
  void setWord (QString word);
  
  virtual void parseResponse();

private:
/**
 * @brief 平均价格
 **/
  QString averagePrice;

/**
 * @brief 相关度
 **/
  QString pertinence;

/**
 * @brief 搜索量
 **/
  QString pv;

/**
 * @brief 推荐的关键词
 **/
  QString word;

};

#endif  /* RECOMMENDWORD_H */
