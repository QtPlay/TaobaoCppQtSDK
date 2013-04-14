#ifndef ADGROUPCATMATCHFORECAST_H
#define ADGROUPCATMATCHFORECAST_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 类目出价预估信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ADGroupCatMatchForecast : public TaoDomain
{

public:
 virtual ~ADGroupCatMatchForecast() { }

  qlonglong getAdgroupId() const;
  void setAdgroupId (qlonglong adgroupId);
  qlonglong getCatmatchId() const;
  void setCatmatchId (qlonglong catmatchId);
  QString getNick() const;
  void setNick (QString nick);
  QString getPriceClick() const;
  void setPriceClick (QString priceClick);
  QString getPriceCust() const;
  void setPriceCust (QString priceCust);
  QString getPriceRank() const;
  void setPriceRank (QString priceRank);
  
  virtual void parseResponse();

private:
/**
 * @brief 推广组ID
 **/
  qlonglong adgroupId;

/**
 * @brief 类目出价ID
 **/
  qlonglong catmatchId;

/**
 * @brief 昵称
 **/
  QString nick;

/**
 * @brief 点击预估；根据出价预估点击量 40:784,50:1007表示出价40分点击量为783；出价50分点击量为1007
 **/
  QString priceClick;

/**
 * @brief 消耗预估；根据出价预估消耗。40:20,50:21表示出价40元分，消耗20分；出价50分消耗21分
 **/
  QString priceCust;

/**
 * @brief 排名预估;根据出价预估排名。 40:101,41:101表示出价40分排名101位；出价41分排名101位
 **/
  QString priceRank;

};

#endif  /* ADGROUPCATMATCHFORECAST_H */
