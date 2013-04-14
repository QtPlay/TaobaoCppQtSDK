#ifndef VASORDERSEARCHREQUEST_H
#define VASORDERSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/VasOrderSearchResponse.h>

/**
 * TOP API: 用于ISV查询自己名下的应用及收费项目的订单记录（已付款订单）。 
建议用于查询前一日的历史记录。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class VasOrderSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getArticleCode() const
;  void setArticleCode (QString articleCode);

 qlonglong getBizOrderId() const
;  void setBizOrderId (qlonglong bizOrderId);

 qlonglong getBizType() const
;  void setBizType (qlonglong bizType);

 QDateTime getEndCreated() const
;  void setEndCreated (QDateTime endCreated);

 QString getItemCode() const
;  void setItemCode (QString itemCode);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getOrderId() const
;  void setOrderId (qlonglong orderId);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QDateTime getStartCreated() const
;  void setStartCreated (QDateTime startCreated);


  virtual VasOrderSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 应用收费代码，从合作伙伴后台（my.open.taobao.com）-收费管理-收费项目列表 能够获得该应用的收费代码
 **/
  QString articleCode;

/**
 * @brief 订单号
 **/
  qlonglong bizOrderId;

/**
 * @brief 订单类型，1=新订 2=续订 3=升级 4=后台赠送 5=后台自动续订 6=订单审核后生成订购关系（暂时用不到） 空=全部
 **/
  qlonglong bizType;

/**
 * @brief 订单创建时间（订购时间）结束值
 **/
  QDateTime endCreated;

/**
 * @brief 收费项目代码，从合作伙伴后台（my.open.taobao.com）-收费管理-收费项目列表 能够获得收费项目代码
 **/
  QString itemCode;

/**
 * @brief 淘宝会员名
 **/
  QString nick;

/**
 * @brief 子订单号
 **/
  qlonglong orderId;

/**
 * @brief 页码
 **/
  qlonglong pageNo;

/**
 * @brief 一页包含的记录数
 **/
  qlonglong pageSize;

/**
 * @brief 订单创建时间（订购时间）起始值（当start_created和end_created都不填写时，默认返回最近90天的数据）
 **/
  QDateTime startCreated;

};

#endif  /* VASORDERSEARCHREQUEST_H */
