#ifndef SUBSCRIPTION_H
#define SUBSCRIPTION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 订阅类型
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Subscription : public TaoDomain
{

public:
 virtual ~Subscription() { }

  QString getStatus() const;
  void setStatus (QString status);
  QString getTopic() const;
  void setTopic (QString topic);
  
  virtual void parseResponse();

private:
/**
 * @brief 增量消息的状态（隶属于主题）。具体选值请见：商品消息状态、退款消息状态、交易消息状态中的说明。
 **/
  QString status;

/**
 * @brief 增量消息所属的主题。 
可选值  
trade（交易类型）  
item（商品类型）  
refund（退款类型）
 **/
  QString topic;

};

#endif  /* SUBSCRIPTION_H */
