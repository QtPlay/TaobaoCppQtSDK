#ifndef INCREMENTCUSTOMERSGETREQUEST_H
#define INCREMENTCUSTOMERSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/IncrementCustomersGetResponse.h>

/**
 * TOP API: 提供查询应用为自身用户所开通的增量消息服务信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IncrementCustomersGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 QString getNicks() const
;  void setNicks (QString nicks);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getType() const
;  void setType (QString type);


  virtual IncrementCustomersGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要返回的字段。可填写的字段参见AppCustomer中的返回字段。如：nick,created,status,type,subscriptions。
 **/
  QString fields;

/**
 * @brief 查询用户的昵称。当为空时通过分页方式查询appkey开通的所有用户,最多填入20个昵称。
 **/
  QString nicks;

/**
 * @brief 分页查询时，查询的页码。此参数只有nicks为空时起作用。
 **/
  qlonglong pageNo;

/**
 * @brief 分布查询时，页的大小。此参数只有当nicks为空时起作用。
 **/
  qlonglong pageSize;

/**
 * @brief 查询用户开通的功能。值可为get,notify和syn分别表示增量api取消息，主动发送消息和同步数据功能。这三个值不分次序。在查询时，type里面的参数会根据应用订阅的类型进行相应的过虑。如应用只订阅主动通知，则默认值过滤后为get,notify，如果应用只订阅数据同步服务，默认值过滤后为syn。
 **/
  QString type;

};

#endif  /* INCREMENTCUSTOMERSGETREQUEST_H */
