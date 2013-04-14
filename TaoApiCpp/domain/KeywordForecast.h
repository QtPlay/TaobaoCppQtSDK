#ifndef KEYWORDFORECAST_H
#define KEYWORDFORECAST_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 词预估信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class KeywordForecast : public TaoDomain
{

public:
 virtual ~KeywordForecast() { }

  qlonglong getKeywordId() const;
  void setKeywordId (qlonglong keywordId);
  QString getNick() const;
  void setNick (QString nick);
  QString getPriceClick() const;
  void setPriceClick (QString priceClick);
  QString getPriceCust() const;
  void setPriceCust (QString priceCust);
  QString getPriceRank() const;
  void setPriceRank (QString priceRank);
  QString getWord() const;
  void setWord (QString word);
  
  virtual void parseResponse();

private:
/**
 * @brief 词ID
 **/
  qlonglong keywordId;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 点击预估；根据出价预估点击量 
40:784,50:1007表示出价40分点击量为783；出价50分点击量为1007
 **/
  QString priceClick;

/**
 * @brief 消耗预估；根据出价预估消耗。40:20,50:21表示出价40元分，消耗20分；出价50分消耗21分
 **/
  QString priceCust;

/**
 * @brief 排名预估;根据出价预估排名。 
40:101,41:101表示出价40分排名101位；出价41分排名101位
 **/
  QString priceRank;

/**
 * @brief 词名称
 **/
  QString word;

};

#endif  /* KEYWORDFORECAST_H */
