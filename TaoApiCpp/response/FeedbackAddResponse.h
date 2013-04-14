#ifndef FEEDBACKADDRESPONSE_H
#define FEEDBACKADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 添加用户反馈信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FeedbackAddResponse : public TaoResponse
{
public:
 virtual ~FeedbackAddResponse() { }

  QDateTime getResult() const;
  void setResult (QDateTime result);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回记录的时间
 **/
  QDateTime result;

};

#endif
