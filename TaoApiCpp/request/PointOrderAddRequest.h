#ifndef POINTORDERADDREQUEST_H
#define POINTORDERADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PointOrderAddResponse.h>

/**
 * TOP API: 向用户发送集分宝，发放集分宝之前，操作流程如下： 
1、申请支付宝增值包。 
2、申请支付宝应用上线时选择集分宝API。 
3、引导商家签约支付宝集分宝服务，地址为https://openapi.alipay.com/subscribe.htm?id=应用ID。 
4、引导商家对授予支付宝集分宝发放权限，地址为https://openauth.alipay.com/oauth2/authorize.htm?scope=p&client_id=应用ID 
5、引导授权的商家采购集分宝，地址为https://jf.alipay.com/aop/purchase.htm，进行集分宝采购。 
6、商家采购之后可以通过集分宝余额API（alipay.point.budget.get）查询商家的集分宝数量。 
7、调用发放API（alipay.point.order.add）发放集分宝。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PointOrderAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAuthToken() const
;  void setAuthToken (QString authToken);

 QString getMemo() const
;  void setMemo (QString memo);

 QString getMerchantOrderNo() const
;  void setMerchantOrderNo (QString merchantOrderNo);

 QDateTime getOrderTime() const
;  void setOrderTime (QDateTime orderTime);

 qlonglong getPointCount() const
;  void setPointCount (qlonglong pointCount);

 QString getUserSymbol() const
;  void setUserSymbol (QString userSymbol);

 QString getUserSymbolType() const
;  void setUserSymbolType (QString userSymbolType);


  virtual PointOrderAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 支付宝用户给应用发放集分宝的授权。
 **/
  QString authToken;

/**
 * @brief 向用户展示集分宝发放备注
 **/
  QString memo;

/**
 * @brief isv提供的发放号订单号，由数字和组成，最大长度为32为，需要保证每笔发放的唯一性，支付宝会对该参数做唯一性控制。如果使用同样的订单号，支付宝将返回订单号已经存在的错误
 **/
  QString merchantOrderNo;

/**
 * @brief 发放集分宝时间
 **/
  QDateTime orderTime;

/**
 * @brief 发放集分宝的数量
 **/
  qlonglong pointCount;

/**
 * @brief 用户标识符，用于指定集分宝发放的用户，和user_symbol_type一起使用，确定一个唯一的支付宝用户
 **/
  QString userSymbol;

/**
 * @brief 用户标识符类型，现在支持ALIPAY_USER_ID:表示支付宝用户ID,ALIPAY_LOGON_ID:表示支付宝登陆号
 **/
  QString userSymbolType;

};

#endif  /* POINTORDERADDREQUEST_H */
