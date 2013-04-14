#ifndef INCREMENTAUTHORIZEMESSAGEGETRESPONSE_H
#define INCREMENTAUTHORIZEMESSAGEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 通用的用于获取用户授权的消息数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IncrementAuthorizeMessageGetResponse : public TaoResponse
{
public:
 virtual ~IncrementAuthorizeMessageGetResponse() { }

  bool getHasNext() const;
  void setHasNext (bool hasNext);  QList<QString> getMessages() const;
  void setMessages (QList<QString> messages);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 代表是否有下一页
 **/
  bool hasNext;

/**
 * @brief 消息的json串
 **/
  QList<QString> messages;

};

#endif
