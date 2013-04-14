#ifndef IDSMODULE_H
#define IDSMODULE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 用于保存宝贝描述规范化模块信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IdsModule : public TaoDomain
{

public:
 virtual ~IdsModule() { }

  qlonglong getId() const;
  void setId (qlonglong id);
  QString getName() const;
  void setName (QString name);
  qlonglong getType() const;
  void setType (qlonglong type);
  
  virtual void parseResponse();

private:
/**
 * @brief 宝贝描述规范化模块id
 **/
  qlonglong id;

/**
 * @brief 宝贝描述规范化模块名
 **/
  QString name;

/**
 * @brief 0为自动打标； 
1为人工打标；
 **/
  qlonglong type;

};

#endif  /* IDSMODULE_H */
