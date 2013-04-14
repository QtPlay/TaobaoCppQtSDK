#ifndef WLBREPLENISHSTATISTICSREQUEST_H
#define WLBREPLENISHSTATISTICSREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbReplenishStatisticsResponse.h>

/**
 * TOP API: 查询BI的统计的补货统计数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbReplenishStatisticsRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getItemCode() const
;  void setItemCode (QString itemCode);

 QString getName() const
;  void setName (QString name);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getStoreCode() const
;  void setStoreCode (QString storeCode);


  virtual WlbReplenishStatisticsResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品编码
 **/
  QString itemCode;

/**
 * @brief 商品名称
 **/
  QString name;

/**
 * @brief 分页参数，默认第一页
 **/
  qlonglong pageNo;

/**
 * @brief 分页每页页数，默认20，最大50
 **/
  qlonglong pageSize;

/**
 * @brief 仓库编码
 **/
  QString storeCode;

};

#endif  /* WLBREPLENISHSTATISTICSREQUEST_H */
