#ifndef WLBPARTNERCONTACT_H
#define WLBPARTNERCONTACT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 联系人联系详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbPartnerContact : public TaoDomain
{

public:
 virtual ~WlbPartnerContact() { }

  QString getName() const;
  void setName (QString name);
  QString getPhone() const;
  void setPhone (QString phone);
  
  virtual void parseResponse();

private:
/**
 * @brief 仓库联系人姓名
 **/
  QString name;

/**
 * @brief 联系电话
 **/
  QString phone;

};

#endif  /* WLBPARTNERCONTACT_H */
