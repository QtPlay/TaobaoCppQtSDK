#ifndef STREAMWEIGHT_H
#define STREAMWEIGHT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 分流权重
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class StreamWeight : public TaoDomain
{

public:
 virtual ~StreamWeight() { }

  QString getUser() const;
  void setUser (QString user);
  qlonglong getWeight() const;
  void setWeight (qlonglong weight);
  
  virtual void parseResponse();

private:
/**
 * @brief 账号
 **/
  QString user;

/**
 * @brief 账号对应的权重
 **/
  qlonglong weight;

};

#endif  /* STREAMWEIGHT_H */
