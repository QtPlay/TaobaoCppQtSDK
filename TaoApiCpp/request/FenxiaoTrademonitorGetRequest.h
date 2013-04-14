#ifndef FENXIAOTRADEMONITORGETREQUEST_H
#define FENXIAOTRADEMONITORGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoTrademonitorGetResponse.h>

/**
 * TOP API: 仅限供应商调用此接口查询经销商品监控信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoTrademonitorGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getDistributorNick() const
;  void setDistributorNick (QString distributorNick);

 QDateTime getEndCreated() const
;  void setEndCreated (QDateTime endCreated);

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QDateTime getStartCreated() const
;  void setStartCreated (QDateTime startCreated);


  virtual FenxiaoTrademonitorGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 经销商的淘宝账号
 **/
  QString distributorNick;

/**
 * @brief 结束时间 格式 yyyy-MM-dd HH:mm:ss.支持到秒的查询。若不传时分秒，默认为0时0分0秒。
 **/
  QDateTime endCreated;

/**
 * @brief 多个字段用","分隔。 fields 如果为空：返回所有采购单对象(purchase_orders)字段。 如果不为空：返回指定采购单对象(purchase_orders)字段。例如：trade_monitors.item_title表示只返回item_title
 **/
  QString fields;

/**
 * @brief 页码。（大于0的整数。小于1按1计）
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数。（每页条数不超过50条，超过50或小于0均按50计）
 **/
  qlonglong pageSize;

/**
 * @brief 产品id
 **/
  qlonglong productId;

/**
 * @brief 起始时间 格式 yyyy-MM-dd HH:mm:ss.支持到秒的查询。若不传时分秒，默认为0时0分0秒。
 **/
  QDateTime startCreated;

};

#endif  /* FENXIAOTRADEMONITORGETREQUEST_H */
