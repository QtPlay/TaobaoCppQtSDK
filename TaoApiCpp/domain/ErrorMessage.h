#ifndef ERRORMESSAGE_H
#define ERRORMESSAGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 未发放成功买家昵称，发放失败原因
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ErrorMessage : public TaoDomain
{

public:
 virtual ~ErrorMessage() { }

  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  QString getReason() const;
  void setReason (QString reason);
  
  virtual void parseResponse();

private:
/**
 * @brief 买家昵称
 **/
  QString buyerNick;

/**
 * @brief 发送失败的原因
 **/
  QString reason;

};

#endif  /* ERRORMESSAGE_H */
