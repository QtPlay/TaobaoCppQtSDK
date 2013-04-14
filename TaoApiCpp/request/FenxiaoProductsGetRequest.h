#ifndef FENXIAOPRODUCTSGETREQUEST_H
#define FENXIAOPRODUCTSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductsGetResponse.h>

/**
 * TOP API: 查询供应商的产品数据。 
 
    * 入参传入pids将优先查询，即只按这个条件查询。 
    *入参传入sku_number将优先查询(没有传入pids)，即只按这个条件查询(最多显示50条) 
    * 入参fields传skus将查询sku的数据，不传该参数默认不查询，返回产品的其它信息。 
    * 入参fields传入images将查询多图数据，不传只返回主图数据。 
    * 入参fields仅对传入pids生效（只有按ID查询时，才能查询额外的数据） 
    * 查询结果按照产品发布时间倒序，即时间近的数据在前。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndModified() const
;  void setEndModified (QDateTime endModified);

 QString getFields() const
;  void setFields (QString fields);

 QString getIsAuthz() const
;  void setIsAuthz (QString isAuthz);

 qlonglong getItemIds() const
;  void setItemIds (qlonglong itemIds);

 QString getOuterId() const
;  void setOuterId (QString outerId);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 qlonglong getPids() const
;  void setPids (qlonglong pids);

 qlonglong getProductcatId() const
;  void setProductcatId (qlonglong productcatId);

 QString getSkuNumber() const
;  void setSkuNumber (QString skuNumber);

 QDateTime getStartModified() const
;  void setStartModified (QDateTime startModified);

 QString getStatus() const
;  void setStatus (QString status);


  virtual FenxiaoProductsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 结束修改时间
 **/
  QDateTime endModified;

/**
 * @brief 指定查询额外的信息，可选值：skus（sku数据）、images（多图），多个可选值用逗号分割。
 **/
  QString fields;

/**
 * @brief 查询产品列表时，查询入参“是否需要授权” 
yes:需要授权  
no:不需要授权
 **/
  QString isAuthz;

/**
 * @brief 可根据导入的商品ID列表查询，优先级次于产品ID、sku_numbers，高于其他分页查询条件。最大限制20，用逗号分割，例如：“1001,1002,1003,1004,1005”
 **/
  qlonglong itemIds;

/**
 * @brief 商家编码
 **/
  QString outerId;

/**
 * @brief 页码（大于0的整数，默认1）
 **/
  qlonglong pageNo;

/**
 * @brief 每页记录数（默认20，最大50）
 **/
  qlonglong pageSize;

/**
 * @brief 产品ID列表（最大限制30），用逗号分割，例如：“1001,1002,1003,1004,1005”
 **/
  qlonglong pids;

/**
 * @brief 产品线ID
 **/
  qlonglong productcatId;

/**
 * @brief sku商家编码
 **/
  QString skuNumber;

/**
 * @brief 开始修改时间
 **/
  QDateTime startModified;

/**
 * @brief 产品状态，可选值：up（上架）、down（下架），不传默认查询所有
 **/
  QString status;

};

#endif  /* FENXIAOPRODUCTSGETREQUEST_H */
