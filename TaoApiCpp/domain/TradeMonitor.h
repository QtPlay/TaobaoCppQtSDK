#ifndef TRADEMONITOR_H
#define TRADEMONITOR_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 经销订单监控记录信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeMonitor : public TaoDomain
{

public:
 virtual ~TradeMonitor() { }

  qlonglong getBuyAmount() const;
  void setBuyAmount (qlonglong buyAmount);
  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  QString getDistributorNick() const;
  void setDistributorNick (QString distributorNick);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  QString getItemNumber() const;
  void setItemNumber (QString itemNumber);
  qlonglong getItemPrice() const;
  void setItemPrice (qlonglong itemPrice);
  QString getItemSkuName() const;
  void setItemSkuName (QString itemSkuName);
  QString getItemSkuNumber() const;
  void setItemSkuNumber (QString itemSkuNumber);
  QString getItemTitle() const;
  void setItemTitle (QString itemTitle);
  qlonglong getItemTotalPrice() const;
  void setItemTotalPrice (qlonglong itemTotalPrice);
  QDateTime getPayTime() const;
  void setPayTime (QDateTime payTime);
  qlonglong getProductId() const;
  void setProductId (qlonglong productId);
  QString getProductNumber() const;
  void setProductNumber (QString productNumber);
  QString getProductSkuNumber() const;
  void setProductSkuNumber (QString productSkuNumber);
  QString getProductTitle() const;
  void setProductTitle (QString productTitle);
  qlonglong getRetailPriceHigh() const;
  void setRetailPriceHigh (qlonglong retailPriceHigh);
  qlonglong getRetailPriceLow() const;
  void setRetailPriceLow (qlonglong retailPriceLow);
  QString getShippingAddress() const;
  void setShippingAddress (QString shippingAddress);
  QString getStatus() const;
  void setStatus (QString status);
  qlonglong getSubTcOrderId() const;
  void setSubTcOrderId (qlonglong subTcOrderId);
  QString getSupplierNick() const;
  void setSupplierNick (QString supplierNick);
  qlonglong getTcOrderId() const;
  void setTcOrderId (qlonglong tcOrderId);
  qlonglong getTradeMonitorId() const;
  void setTradeMonitorId (qlonglong tradeMonitorId);
  
  virtual void parseResponse();

private:
/**
 * @brief 交易订单的商品购买数量
 **/
  qlonglong buyAmount;

/**
 * @brief 买家的淘宝账号昵称
 **/
  QString buyerNick;

/**
 * @brief 经销商的淘宝账号昵称
 **/
  QString distributorNick;

/**
 * @brief 交易订单的商品id
 **/
  qlonglong itemId;

/**
 * @brief 交易订单的商品的商家编码
 **/
  QString itemNumber;

/**
 * @brief 交易订单的商品价格
 **/
  qlonglong itemPrice;

/**
 * @brief 交易订单的商品的sku名称
 **/
  QString itemSkuName;

/**
 * @brief 交易订单的商品的sku商家编码
 **/
  QString itemSkuNumber;

/**
 * @brief 交易订单的商品标题
 **/
  QString itemTitle;

/**
 * @brief 交易订单的商品总价格（单价×数量+改价+优惠）
 **/
  qlonglong itemTotalPrice;

/**
 * @brief 交易订单的付款时间
 **/
  QDateTime payTime;

/**
 * @brief 供应商的产品id
 **/
  qlonglong productId;

/**
 * @brief 供应商的产品的商家编码
 **/
  QString productNumber;

/**
 * @brief 供应商的产品的sku商家编码
 **/
  QString productSkuNumber;

/**
 * @brief 供应商的产品标题
 **/
  QString productTitle;

/**
 * @brief 交易订单的商品最高零售价
 **/
  qlonglong retailPriceHigh;

/**
 * @brief 交易订单的商品最低零售价
 **/
  qlonglong retailPriceLow;

/**
 * @brief 收货人地址
 **/
  QString shippingAddress;

/**
 * @brief 交易订单的状态： 
WAIT_SELLER_SEND_GOODS(已付款，待发货）<br>WAIT_BUYER_CONFIRM_GOODS(已付款，已发货)<br>TRADE_FINISHED(交易成功) 
TRADE_CLOSED(交易关闭)<br>TRADE_REFUNDING（退款中）
 **/
  QString status;

/**
 * @brief 交易订单的子订单号
 **/
  qlonglong subTcOrderId;

/**
 * @brief 供应商的淘宝账号昵称
 **/
  QString supplierNick;

/**
 * @brief 交易订单号
 **/
  qlonglong tcOrderId;

/**
 * @brief 主键id
 **/
  qlonglong tradeMonitorId;

};

#endif  /* TRADEMONITOR_H */
