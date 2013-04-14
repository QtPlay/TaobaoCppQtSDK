#ifndef LOGISTICSCOMPANY_H
#define LOGISTICSCOMPANY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 物流公司基础数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsCompany : public TaoDomain
{

public:
 virtual ~LogisticsCompany() { }

  QString getCode() const;
  void setCode (QString code);
  qlonglong getId() const;
  void setId (qlonglong id);
  QString getName() const;
  void setName (QString name);
  QString getRegMailNo() const;
  void setRegMailNo (QString regMailNo);
  
  virtual void parseResponse();

private:
/**
 * @brief 物流公司代码
 **/
  QString code;

/**
 * @brief 物流公司标识
 **/
  qlonglong id;

/**
 * @brief 物流公司简称
 **/
  QString name;

/**
 * @brief 运单号验证正则表达式
 **/
  QString regMailNo;

};

#endif  /* LOGISTICSCOMPANY_H */
