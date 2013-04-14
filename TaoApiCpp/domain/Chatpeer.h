#ifndef CHATPEER_H
#define CHATPEER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 聊天对象ID列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Chatpeer : public TaoDomain
{

public:
 virtual ~Chatpeer() { }

  QString getDate() const;
  void setDate (QString date);
  QString getUid() const;
  void setUid (QString uid);
  
  virtual void parseResponse();

private:
/**
 * @brief 聊天日期
 **/
  QString date;

/**
 * @brief 聊天对象用户ID：cntaobao+淘宝nick，例如cntaobaotest
 **/
  QString uid;

};

#endif  /* CHATPEER_H */
