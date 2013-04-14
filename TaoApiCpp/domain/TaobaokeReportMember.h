#ifndef TAOBAOKEREPORTMEMBER_H
#define TAOBAOKEREPORTMEMBER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 淘宝客报表成员
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TaobaokeReportMember : public TaoDomain
{

public:
 virtual ~TaobaokeReportMember() { }

  QString getAppKey() const;
  void setAppKey (QString appKey);
  qlonglong getCategoryId() const;
  void setCategoryId (qlonglong categoryId);
  QString getCategoryName() const;
  void setCategoryName (QString categoryName);
  QString getCommission() const;
  void setCommission (QString commission);
  QString getCommissionRate() const;
  void setCommissionRate (QString commissionRate);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  qlonglong getItemNum() const;
  void setItemNum (qlonglong itemNum);
  QString getItemTitle() const;
  void setItemTitle (QString itemTitle);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  QString getOuterCode() const;
  void setOuterCode (QString outerCode);
  QString getPayPrice() const;
  void setPayPrice (QString payPrice);
  QDateTime getPayTime() const;
  void setPayTime (QDateTime payTime);
  QString getRealPayFee() const;
  void setRealPayFee (QString realPayFee);
  QString getSellerNick() const;
  void setSellerNick (QString sellerNick);
  QString getShopTitle() const;
  void setShopTitle (QString shopTitle);
  qlonglong getTradeId() const;
  void setTradeId (qlonglong tradeId);
  qlonglong getTradeParentId() const;
  void setTradeParentId (qlonglong tradeParentId);
  
  virtual void parseResponse();

private:
/**
 * @brief 应用授权码
 **/
  QString appKey;

/**
 * @brief 所购买商品的类目ID
 **/
  qlonglong categoryId;

/**
 * @brief 所购买商品的类目名称
 **/
  QString categoryName;

/**
 * @brief 用户获得的佣金
 **/
  QString commission;

/**
 * @brief 佣金比率。比如：0.01代表1%
 **/
  QString commissionRate;

/**
 * @brief 订单创建时间
 **/
  QDateTime createTime;

/**
 * @brief 商品成交数量
 **/
  qlonglong itemNum;

/**
 * @brief 商品标题
 **/
  QString itemTitle;

/**
 * @brief 商品ID
 **/
  qlonglong numIid;

/**
 * @brief 推广渠道
 **/
  QString outerCode;

/**
 * @brief 成交价格
 **/
  QString payPrice;

/**
 * @brief 成交时间
 **/
  QDateTime payTime;

/**
 * @brief 实际支付金额
 **/
  QString realPayFee;

/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

/**
 * @brief 店铺名称
 **/
  QString shopTitle;

/**
 * @brief 淘宝交易号
 **/
  qlonglong tradeId;

/**
 * @brief 淘宝父交易号
 **/
  qlonglong tradeParentId;

};

#endif  /* TAOBAOKEREPORTMEMBER_H */
