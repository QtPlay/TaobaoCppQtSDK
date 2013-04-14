#ifndef FENXIAODISTRIBUTORPROCUCTSTATICGETREQUEST_H
#define FENXIAODISTRIBUTORPROCUCTSTATICGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoDistributorProcuctStaticGetResponse.h>

/**
 * TOP API: 获取分销商品流量，以天为单位统计分销商品的PV，UV
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDistributorProcuctStaticGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDistributorUserNick() const
;  void setDistributorUserNick (QString distributorUserNick);

 QString getProductIdArray() const
;  void setProductIdArray (QString productIdArray);


  virtual FenxiaoDistributorProcuctStaticGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 分销商淘宝店主nick
 **/
  QString distributorUserNick;

/**
 * @brief 供应商商品id，一次可以传多个，每次最多40个。 
以,(英文)作为分隔符。
 **/
  QString productIdArray;

};

#endif  /* FENXIAODISTRIBUTORPROCUCTSTATICGETREQUEST_H */
