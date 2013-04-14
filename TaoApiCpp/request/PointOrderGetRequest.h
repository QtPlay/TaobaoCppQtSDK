#ifndef POINTORDERGETREQUEST_H
#define POINTORDERGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PointOrderGetResponse.h>

/**
 * TOP API: 查询集分宝发放详情，发放API是alipay.point.order.add。请先熟悉发放API的流程。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PointOrderGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAuthToken() const
;  void setAuthToken (QString authToken);

 QString getMerchantOrderNo() const
;  void setMerchantOrderNo (QString merchantOrderNo);

 QString getUserSymbol() const
;  void setUserSymbol (QString userSymbol);

 QString getUserSymbolType() const
;  void setUserSymbolType (QString userSymbolType);


  virtual PointOrderGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 支付宝用户给应用的授权。
 **/
  QString authToken;

/**
 * @brief isv提供的发放号订单号，由数字和组成，最大长度为32为，需要保证每笔发放的唯一性，支付宝会对该参数做唯一性控制。如果使用同样的订单号，支付宝将返回订单号已经存在的错误
 **/
  QString merchantOrderNo;

/**
 * @brief 用户标识符，用于指定集分宝发放的用户，和user_symbol_type一起使用，确定一个唯一的支付宝用户
 **/
  QString userSymbol;

/**
 * @brief 用户标识符类型，现在支持ALIPAY_USER_ID:表示支付宝用户ID,ALIPAY_LOGON_ID:表示支付宝登陆号
 **/
  QString userSymbolType;

};

#endif  /* POINTORDERGETREQUEST_H */
