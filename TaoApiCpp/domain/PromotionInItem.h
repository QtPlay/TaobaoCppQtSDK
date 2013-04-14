#ifndef PROMOTIONINITEM_H
#define PROMOTIONINITEM_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>


/**
 * @brief 单品级优惠信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionInItem : public TaoDomain
{

public:
 virtual ~PromotionInItem() { }

  QString getDesc() const;
  void setDesc (QString desc);
  QDateTime getEndTime() const;
  void setEndTime (QDateTime endTime);
  QString getItemPromoPrice() const;
  void setItemPromoPrice (QString itemPromoPrice);
  QString getName() const;
  void setName (QString name);
  QString getOtherNeed() const;
  void setOtherNeed (QString otherNeed);
  QString getOtherSend() const;
  void setOtherSend (QString otherSend);
  QString getPromotionId() const;
  void setPromotionId (QString promotionId);
  QList<QString> getSkuIdList() const;
  void setSkuIdList (QList<QString> skuIdList);
  QList<QString> getSkuPriceList() const;
  void setSkuPriceList (QList<QString> skuPriceList);
  QDateTime getStartTime() const;
  void setStartTime (QDateTime startTime);
  
  virtual void parseResponse();

private:
/**
 * @brief 优惠描述
 **/
  QString desc;

/**
 * @brief 优惠结束时间
 **/
  QDateTime endTime;

/**
 * @brief 优惠折后价格
 **/
  QString itemPromoPrice;

/**
 * @brief 优惠展示名称
 **/
  QString name;

/**
 * @brief 需要支付附加物，显示为+xxx。如：+20淘金币
 **/
  QString otherNeed;

/**
 * @brief 赠送东西。如：送10商城积分
 **/
  QString otherSend;

/**
 * @brief idValue的值
 **/
  QString promotionId;

/**
 * @brief sku价格对应的id（保证二者顺序相同）
 **/
  QList<QString> skuIdList;

/**
 * @brief sku价格列表
 **/
  QList<QString> skuPriceList;

/**
 * @brief 优惠开始时间
 **/
  QDateTime startTime;

};

#endif  /* PROMOTIONINITEM_H */
