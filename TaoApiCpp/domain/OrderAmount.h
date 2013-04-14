#ifndef ORDERAMOUNT_H
#define ORDERAMOUNT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 子订单的帐务数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class OrderAmount : public TaoDomain
{

public:
 virtual ~OrderAmount() { }

  QString getAdjustFee() const;
  void setAdjustFee (QString adjustFee);
  QString getDiscountFee() const;
  void setDiscountFee (QString discountFee);
  qlonglong getNum() const;
  void setNum (qlonglong num);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  qlonglong getOid() const;
  void setOid (qlonglong oid);
  QString getPayment() const;
  void setPayment (QString payment);
  QString getPrice() const;
  void setPrice (QString price);
  QString getPromotionName() const;
  void setPromotionName (QString promotionName);
  qlonglong getSkuId() const;
  void setSkuId (qlonglong skuId);
  QString getSkuPropertiesName() const;
  void setSkuPropertiesName (QString skuPropertiesName);
  QString getTitle() const;
  void setTitle (QString title);
  
  virtual void parseResponse();

private:
/**
 * @brief 卖家手工调整的子订单的优惠金额.格式为:1.01;单位:元;精确到小数点后两位.
 **/
  QString adjustFee;

/**
 * @brief 子订单的系统优惠金额。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString discountFee;

/**
 * @brief 子交易订单中购买商品的数量
 **/
  qlonglong num;

/**
 * @brief 子订单对应的商品数字id
 **/
  qlonglong numIid;

/**
 * @brief 子交易订单编号
 **/
  qlonglong oid;

/**
 * @brief 子订单实付金额。精确到2位小数，单位:元。如:200.07，表示:200元7分。计算公式如下：payment = price * num + adjust_fee - discount_fee + post_fee(邮费，单笔子订单时子订单实付金额包含邮费，多笔子订单时不包含邮费)；对于退款成功的子订单，由于主订单的优惠分摊金额，会造成该字段可能不为0.00元。建议使用退款前的实付金额减去退款单中的实际退款金额计算。
 **/
  QString payment;

/**
 * @brief 商品价格。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString price;

/**
 * @brief 子订单的系统优惠的名称，对应于discount_fee的名称
 **/
  QString promotionName;

/**
 * @brief 子订单对应的商品的sku_id
 **/
  qlonglong skuId;

/**
 * @brief SKU的值。如：机身颜色:黑色;手机套餐:官方标配
 **/
  QString skuPropertiesName;

/**
 * @brief 商品标题
 **/
  QString title;

};

#endif  /* ORDERAMOUNT_H */
