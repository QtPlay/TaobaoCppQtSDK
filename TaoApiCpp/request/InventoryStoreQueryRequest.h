#ifndef INVENTORYSTOREQUERYREQUEST_H
#define INVENTORYSTOREQUERYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryStoreQueryResponse.h>

/**
 * TOP API: 查询商家仓信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryStoreQueryRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getStoreCode() const
;  void setStoreCode (QString storeCode);


  virtual InventoryStoreQueryResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商家的仓库编码
 **/
  QString storeCode;

};

#endif  /* INVENTORYSTOREQUERYREQUEST_H */
