#ifndef FENXIAOPRODUCTSKUSGETREQUEST_H
#define FENXIAOPRODUCTSKUSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductSkusGetResponse.h>

/**
 * TOP API: 产品sku查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductSkusGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);


  virtual FenxiaoProductSkusGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 产品ID
 **/
  qlonglong productId;

};

#endif  /* FENXIAOPRODUCTSKUSGETREQUEST_H */
