#ifndef DISCARDINFO_H
#define DISCARDINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 用户丢失消息的数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class DiscardInfo : public TaoDomain
{

public:
 virtual ~DiscardInfo() { }

  qlonglong getEnd() const;
  void setEnd (qlonglong end);
  QString getNick() const;
  void setNick (QString nick);
  qlonglong getStart() const;
  void setStart (qlonglong start);
  QString getSubscribeKey() const;
  void setSubscribeKey (QString subscribeKey);
  QString getSubscribeValue() const;
  void setSubscribeValue (QString subscribeValue);
  QString getType() const;
  void setType (QString type);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  
  virtual void parseResponse();

private:
/**
 * @brief 丢弃消息的结束时间
 **/
  qlonglong end;

/**
 * @brief 用户nick
 **/
  QString nick;

/**
 * @brief 丢弃消息的开始时间
 **/
  qlonglong start;

/**
 * @brief 非授权消息订阅的关键字，比如按商品编号订阅时，此值为num_iid
 **/
  QString subscribeKey;

/**
 * @brief 非授权消息订阅的值，比如按商品编号订阅时，此值为商品的具体编号
 **/
  QString subscribeValue;

/**
 * @brief 消息类型
 **/
  QString type;

/**
 * @brief 用户id
 **/
  qlonglong userId;

};

#endif  /* DISCARDINFO_H */
