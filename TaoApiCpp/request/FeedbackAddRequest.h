#ifndef FEEDBACKADDREQUEST_H
#define FEEDBACKADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FeedbackAddResponse.h>

/**
 * TOP API: 添加用户反馈信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FeedbackAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getInfo() const
;  void setInfo (QString info);

 QString getType() const
;  void setType (QString type);


  virtual FeedbackAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 具体反馈的信息，一个json构成的字符串
 **/
  QString info;

/**
 * @brief 反馈信息的类型，例如是同步服务的或者其他系统的
 **/
  QString type;

};

#endif  /* FEEDBACKADDREQUEST_H */
