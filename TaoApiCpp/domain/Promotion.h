#ifndef PROMOTION_H
#define PROMOTION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 商品优惠策略详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Promotion : public TaoDomain
{

public:
 virtual ~Promotion() { }

  qlonglong getDecreaseNum() const;
  void setDecreaseNum (qlonglong decreaseNum);
  QString getDiscountType() const;
  void setDiscountType (QString discountType);
  QString getDiscountValue() const;
  void setDiscountValue (QString discountValue);
  QDateTime getEndDate() const;
  void setEndDate (QDateTime endDate);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  QString getPromotionDesc() const;
  void setPromotionDesc (QString promotionDesc);
  qlonglong getPromotionId() const;
  void setPromotionId (qlonglong promotionId);
  QString getPromotionTitle() const;
  void setPromotionTitle (QString promotionTitle);
  QDateTime getStartDate() const;
  void setStartDate (QDateTime startDate);
  QString getStatus() const;
  void setStatus (QString status);
  qlonglong getTagId() const;
  void setTagId (qlonglong tagId);
  
  virtual void parseResponse();

private:
/**
 * @brief 减价件数，1只减一件，0表示多件
 **/
  qlonglong decreaseNum;

/**
 * @brief 优惠类型，PRICE表示按价格优惠，DISCOUNT表示按折扣优惠
 **/
  QString discountType;

/**
 * @brief 优惠额度
 **/
  QString discountValue;

/**
 * @brief 优惠结束日期
 **/
  QDateTime endDate;

/**
 * @brief 商品数字ID
 **/
  qlonglong numIid;

/**
 * @brief 优惠描述
 **/
  QString promotionDesc;

/**
 * @brief 优惠ID
 **/
  qlonglong promotionId;

/**
 * @brief 优惠标题，显示在宝贝详情页面的优惠图标的tip。
 **/
  QString promotionTitle;

/**
 * @brief 优惠开始日期
 **/
  QDateTime startDate;

/**
 * @brief 优惠策略状态，ACTIVE表示有效，UNACTIVE表示无效
 **/
  QString status;

/**
 * @brief 对应的人群标签ID
 **/
  qlonglong tagId;

};

#endif  /* PROMOTION_H */
