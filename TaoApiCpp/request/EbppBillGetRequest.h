#ifndef EBPPBILLGETREQUEST_H
#define EBPPBILLGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/EbppBillGetResponse.h>

/**
 * TOP API: 查询生活账单信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class EbppBillGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAuthToken() const
;  void setAuthToken (QString authToken);

 QString getMerchantOrderNo() const
;  void setMerchantOrderNo (QString merchantOrderNo);

 QString getOrderType() const
;  void setOrderType (QString orderType);


  virtual EbppBillGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 支付宝授权凭证，如果有淘宝的session可以不传
 **/
  QString authToken;

/**
 * @brief 输出机构的业务流水号，需要保证唯一性。
 **/
  QString merchantOrderNo;

/**
 * @brief 支付宝订单类型。公共事业缴纳JF,信用卡还款HK
 **/
  QString orderType;

};

#endif  /* EBPPBILLGETREQUEST_H */
