#ifndef LOTTERYWANGCAISELLERGOODSINFO_H
#define LOTTERYWANGCAISELLERGOODSINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 卖家商品信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LotteryWangcaiSellerGoodsInfo : public TaoDomain
{

public:
 virtual ~LotteryWangcaiSellerGoodsInfo() { }

  QDateTime getActBeginTime() const;
  void setActBeginTime (QDateTime actBeginTime);
  QDateTime getActEndTime() const;
  void setActEndTime (QDateTime actEndTime);
  qlonglong getGoodsId() const;
  void setGoodsId (qlonglong goodsId);
  qlonglong getLotteryTypeId() const;
  void setLotteryTypeId (qlonglong lotteryTypeId);
  qlonglong getPresentType() const;
  void setPresentType (qlonglong presentType);
  
  virtual void parseResponse();

private:
/**
 * @brief 活动开始时间
 **/
  QDateTime actBeginTime;

/**
 * @brief 活动结束时间
 **/
  QDateTime actEndTime;

/**
 * @brief 商品id
 **/
  qlonglong goodsId;

/**
 * @brief 彩种id
 **/
  qlonglong lotteryTypeId;

/**
 * @brief 赠送类型：0：满就送，1：好评送，2：分享送，3：游戏送，4：收藏送
 **/
  qlonglong presentType;

};

#endif  /* LOTTERYWANGCAISELLERGOODSINFO_H */
