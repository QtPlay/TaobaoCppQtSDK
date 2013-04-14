#ifndef INCREMENTCUSTOMERPERMITREQUEST_H
#define INCREMENTCUSTOMERPERMITREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/IncrementCustomerPermitResponse.h>

/**
 * TOP API: 提供app为自己的用户开通增量消息服务功能
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IncrementCustomerPermitRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getStatus() const
;  void setStatus (QString status);

 QString getTopics() const
;  void setTopics (QString topics);

 QString getType() const
;  void setType (QString type);


  virtual IncrementCustomerPermitResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 表示与topics相对应的消息状态。各个消息主题间用";"分隔，各个状态间用","分隔，消息主题必须和topics一致。如果为all时，表示开通应用订阅的所有的消息。 
如果不填写,会默认开通应用所订阅的所有消息。
 **/
  QString status;

/**
 * @brief 应用为用户开通的主动通知的消息主题（或消息类别），该主题必须是应用订阅的主题。如果应用未订阅该主题，则系统会自动过滤掉该主题。各个主题间用";"分隔。 如果不填写，会采用应用所订阅的消息，下次应用消息修改时此用户的消息会自动修改。 如果填写了消息类型，在应用修改增加消息类型时，用户的消息类型是不会随着增加相应类型，除非通过重新permit增加。
 **/
  QString topics;

/**
 * @brief 用户需要开通的功能。值可为get,notify和syn分别表示增量api取消息，主动发送消息和同步数据功能。这三个值可任意无序组合。应用在为用户开通相应功能前需先订阅相应的功能；get和notify在主动通知界面中订阅，syn在mysql数据同步步界面中订阅。 
当重复开通时，只会在已经开通的功能上，开通新的功能，不会覆盖旧的开通。例如：在开通get功能后，再次开通notify功能的结果是开通了get和notify功能；而不会只开通notify功能。 
在开通时，type里面的参数会根据应用订阅的类型进行相应的过虑。如应用只订阅主动通知，则默认值过滤后为get,notify，如果应用只订阅数据同步服务，默认值过滤后为syn。
 **/
  QString type;

};

#endif  /* INCREMENTCUSTOMERPERMITREQUEST_H */
