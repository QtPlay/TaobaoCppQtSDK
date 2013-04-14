#ifndef FENXIAODISTRIBUTORITEMSGETREQUEST_H
#define FENXIAODISTRIBUTORITEMSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoDistributorItemsGetResponse.h>

/**
 * TOP API: 供应商查询分销商商品下载记录。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDistributorItemsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDistributorId() const
;  void setDistributorId (qlonglong distributorId);

 QDateTime getEndModified() const
;  void setEndModified (QDateTime endModified);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QDateTime getStartModified() const
;  void setStartModified (QDateTime startModified);


  virtual FenxiaoDistributorItemsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 分销商ID 。
 **/
  qlonglong distributorId;

/**
 * @brief 设置结束时间,空为不设置。
 **/
  QDateTime endModified;

/**
 * @brief 页码（大于0的整数，默认1）
 **/
  qlonglong pageNo;

/**
 * @brief 每页记录数（默认20，最大50）
 **/
  qlonglong pageSize;

/**
 * @brief 产品ID
 **/
  qlonglong productId;

/**
 * @brief 设置开始时间。空为不设置。
 **/
  QDateTime startModified;

};

#endif  /* FENXIAODISTRIBUTORITEMSGETREQUEST_H */
