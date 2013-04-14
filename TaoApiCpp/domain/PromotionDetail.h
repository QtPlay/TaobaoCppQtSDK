#ifndef PROMOTIONDETAIL_H
#define PROMOTIONDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 交易的优惠信息详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionDetail : public TaoDomain
{

public:
 virtual ~PromotionDetail() { }

  QString getDiscountFee() const;
  void setDiscountFee (QString discountFee);
  QString getGiftItemId() const;
  void setGiftItemId (QString giftItemId);
  QString getGiftItemName() const;
  void setGiftItemName (QString giftItemName);
  QString getGiftItemNum() const;
  void setGiftItemNum (QString giftItemNum);
  qlonglong getId() const;
  void setId (qlonglong id);
  QString getPromotionDesc() const;
  void setPromotionDesc (QString promotionDesc);
  QString getPromotionId() const;
  void setPromotionId (QString promotionId);
  QString getPromotionName() const;
  void setPromotionName (QString promotionName);
  
  virtual void parseResponse();

private:
/**
 * @brief 优惠金额（免运费、限时打折时为空）,单位：元
 **/
  QString discountFee;

/**
 * @brief 赠品的宝贝id
 **/
  QString giftItemId;

/**
 * @brief 满就送商品时，所送商品的名称
 **/
  QString giftItemName;

/**
 * @brief 满就送礼物的礼物数量
 **/
  QString giftItemNum;

/**
 * @brief 交易的主订单或子订单号
 **/
  qlonglong id;

/**
 * @brief 优惠活动的描述
 **/
  QString promotionDesc;

/**
 * @brief 优惠id，(由营销工具id、优惠活动id和优惠详情id组成，结构为：营销工具id-优惠活动id_优惠详情id，如mjs-123024_211143）
 **/
  QString promotionId;

/**
 * @brief 优惠信息的名称
 **/
  QString promotionName;

};

#endif  /* PROMOTIONDETAIL_H */
