#ifndef WLBITEMBATCHQUERYREQUEST_H
#define WLBITEMBATCHQUERYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemBatchQueryResponse.h>

/**
 * TOP API: 根据用户id，item id list和store code来查询商品库存信息和批次信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemBatchQueryRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getItemIds() const
;  void setItemIds (QString itemIds);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getStoreCode() const
;  void setStoreCode (QString storeCode);


  virtual WlbItemBatchQueryResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要查询的商品ID列表，以字符串表示，ID间以;隔开
 **/
  QString itemIds;

/**
 * @brief 分页查询参数，指定查询页数，默认为1
 **/
  qlonglong pageNo;

/**
 * @brief 分页查询参数，每页查询数量，默认20，最大值50,大于50时按照50条查询
 **/
  qlonglong pageSize;

/**
 * @brief 仓库编号
 **/
  QString storeCode;

};

#endif  /* WLBITEMBATCHQUERYREQUEST_H */
