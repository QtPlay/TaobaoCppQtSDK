#ifndef UDPITEMGETREQUEST_H
#define UDPITEMGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UdpItemGetResponse.h>

/**
 * TOP API: 商品指标查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UdpItemGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getArea() const
;  void setArea (qlonglong area);

 QDateTime getBeginTime() const
;  void setBeginTime (QDateTime beginTime);

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 qlonglong getFields() const
;  void setFields (qlonglong fields);

 qlonglong getItemid() const
;  void setItemid (qlonglong itemid);

 qlonglong getItems() const
;  void setItems (qlonglong items);

 QString getOrderBy() const
;  void setOrderBy (QString orderBy);

 QString getOrderRule() const
;  void setOrderRule (QString orderRule);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getParameters() const
;  void setParameters (QString parameters);

 qlonglong getSource() const
;  void setSource (qlonglong source);


  virtual UdpItemGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 地区ID
 **/
  qlonglong area;

/**
 * @brief 开始时间
 **/
  QDateTime beginTime;

/**
 * @brief 结束时间
 **/
  QDateTime endTime;

/**
 * @brief 指标ID(参阅指标编号)
 **/
  qlonglong fields;

/**
 * @brief 商品ID
 **/
  qlonglong itemid;

/**
 * @brief 多个宝贝列表
 **/
  qlonglong items;

/**
 * @brief 排序指标
 **/
  QString orderBy;

/**
 * @brief 排序规则
 **/
  QString orderRule;

/**
 * @brief 查询页码，0为第一页
 **/
  qlonglong pageNo;

/**
 * @brief 每页记录数
 **/
  qlonglong pageSize;

/**
 * @brief 备用
 **/
  QString parameters;

/**
 * @brief 来源ID
 **/
  qlonglong source;

};

#endif  /* UDPITEMGETREQUEST_H */
