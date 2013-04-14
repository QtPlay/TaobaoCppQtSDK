#ifndef GRADEDISCOUNT_H
#define GRADEDISCOUNT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 等级折扣数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class GradeDiscount : public TaoDomain
{

public:
 virtual ~GradeDiscount() { }

  qlonglong getDiscountId() const;
  void setDiscountId (qlonglong discountId);
  qlonglong getDiscountType() const;
  void setDiscountType (qlonglong discountType);
  QString getPrice() const;
  void setPrice (QString price);
  qlonglong getSkuId() const;
  void setSkuId (qlonglong skuId);
  qlonglong getTradeType() const;
  void setTradeType (qlonglong tradeType);
  
  virtual void parseResponse();

private:
/**
 * @brief 等级ID或分销商ID
 **/
  qlonglong discountId;

/**
 * @brief 折扣类型（是等级还是分销商折扣）
 **/
  qlonglong discountType;

/**
 * @brief 采购价格
 **/
  QString price;

/**
 * @brief skuId
 **/
  qlonglong skuId;

/**
 * @brief 经/代销模式
 **/
  qlonglong tradeType;

};

#endif  /* GRADEDISCOUNT_H */
